#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer;
    int middle = s.size() / 2;
    if(s.size() % 2 == 0){
        answer = answer + s[middle-1] + s[middle];
    } 
    else{
        answer = s[middle];
    }
    return answer;
}