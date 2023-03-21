#include "solvePost.h"
#include <string>

void solve(){
    std::string s;
    Stack m;
    //std::cin >> s;
    s = "234+*2/";
    for (int  i = 0; i < s.size(); ++i){
        if (isdigit(s[i])){
            m.push(int(s[i]-'0'));
        }
        else{
            int first, second;
            second = m.pop();
            first = m.pop();
            switch(s[i]){
                case '+':
                    m.push(first + second);
                    break;
                case '-':
                    m.push(first - second);
                    break;
                case '*':
                    m.push(first * second);
                    break;
                case '/':
                    m.push(first / second);
                    break;
            }
        }
        
    }
    std::cout << m.top();

}

int main(){
    solve();
    return 0;
}