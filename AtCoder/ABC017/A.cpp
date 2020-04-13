#include <bits/stdc++.h>
using namespace std;

int main(){
    int s_1, e_1;
    int s_2, e_2;
    int s_3, e_3;

    cin >> s_1 >> e_1;
    cin >> s_2 >> e_2;
    cin >> s_3 >> e_3;

    cout << (s_1*0.1*e_1) + (s_2*0.1*e_2) + (s_3*0.1*e_3) << endl;

    return 0;
}