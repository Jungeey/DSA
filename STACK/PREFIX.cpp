#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
bool seperate(char x){
    if(x == '$' || x == '*' || x == '/' || x == '+' || x == '-' || x == '(' || x == ')'){
               return true; 
    } else{
               return false; 
    }
}
int precedence(char x){
    if(x=='$'){
            return 4;
    } else if (x=='/'|| x=='*'){
            return 3;
    } else {
            return 2;
    }
}
void precedencechecker(stack<char> &operands, char &element, string &result) {
    while (!operands.empty() && operands.top() != ')' && operands.top() != '(' && precedence(operands.top()) > precedence(element)) {
        result = result + operands.top();
        operands.pop();
    }
    operands.push(element);
}

int main(){
    string exp,result;
    cout<<"Enter an Expression: ";
    cin>>exp;
    int len=exp.length();
    reverse(exp.begin(), exp.end());
    cout<<"Reverse of input: "<<exp<<endl;
    stack<char> operands;
    
    for(int i=0;i<len;i++){
        if(seperate(exp[i])==1){
            if(exp[i]=='('){
                while(operands.top()!=')'){
                    result=result+operands.top();
                    operands.pop();
                }
                operands.pop();
            } else if(exp[i]==')'){
                operands.push(exp[i]);
            }else{
                precedencechecker(operands,exp[i],result);
            }
        }else{
            result=result+exp[i];
        }
    }
    
    
    while (!operands.empty()) {
        result=result+ operands.top() ;
        operands.pop();
    }
    cout<<"Postfix of reversed input: "<<result<<endl;
    reverse(result.begin(), result.end());
    cout<<"Prefix of input: "<<result;
    return 0;
}
