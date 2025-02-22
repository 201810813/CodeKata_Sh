#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = n;
    int b = m;
    int r = -1;
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    answer.push_back(a);
    
    answer.push_back(n*m/a);
    
    return answer;
}