#include<iostream>
#include<string>
#include<stack>
#include<cmath>
using namespace std;
bool seperate(char x){
    if(x == '$' || x == '*' || x == '/' || x == '+' || x == '-'){
               return true; 
    } else{
               return false; 
    }
}
int operation(int x,int y,char operators){
    switch(operators){
        case '+':
            return x+y;
            
        case '-':
            return x-y;
            
        case '/':
            return x/y;
            
        case '*':
            return x*y;
            
        case '$':
            return pow(x,y);
    }
    return 0;
}

int main(){
    string exp;
    int op1,op2,Result,read;
    cout<<"Enter an Postfix Expression: ";
    cin>>exp;
    int len=exp.length();
    stack<int> val;
    for(int i=0;i<len;i++){
        if(seperate(exp[i])==0){
            cout<<"Enter value of "<<exp[i]<<": ";
            cin>>read;
            val.push(read);
        }else{
            op2=val.top();
            val.pop();
            op1=val.top();
            val.pop();
            val.push(operation(op1,op2,exp[i]));
        }
    }
    Result=val.top();
    cout<<"Result:"<<Result;
    return 0;
}
