#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int num[100];
    int even_num[100];
    int flag, array_size = 0;

    cin >> n;
    for(int i; i<n; i++){
        cin >> num[i];
    }

    for(int i; i<n; i++){
        if(num[i]%2 == 0){
            even_num[i] == num[i];
            array_size +=1;
            if((even_num[i]%3==0) && (even_num[i]%5==0)){
                flag += 1;
            }
            else{
                 flag += 0;
            }
        }
    }
    if(flag == array_size) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
}