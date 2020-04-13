#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> p(3);
  vector<int> q(3);

  for(int i=0; i<3; i++){
  	cin >> p.at(i);
    q.at(i)=p.at(i);
  }
  
  sort(p.begin(),p.end());

  for(int i=0; i<3; i++){
  	for(int j=0; j<3; j++){
      if(p.at(j)==q.at(i))cout << 3-j <<endl;
    }
  }
}