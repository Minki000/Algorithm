#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

#define FOR(x,n,m) for(int x=n; x<(m); x++)

vector<int> v;
stack<int> s;
queue<int> q;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string a;
        int b;
        cin >> a;
        if (a.compare("push") == 0){
            cin >> b;
            s.push(b);
        }
        else if (a.compare("top") == 0){
            if (s.empty()) {
                cout << -1 << endl;
            }
            else cout << s.top() << endl;
        }
        else if (a.compare("pop") == 0){
            if (s.empty()) {
                cout << -1 << endl;
            }
            else {
                cout  << s.top() << endl;
                s.pop();
            }
        }
        else if (a.compare("size") == 0){
            cout << s.size() << endl;
        }
        else if(a.compare("empty") == 0){
            if(s.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    
    return 0;
}
