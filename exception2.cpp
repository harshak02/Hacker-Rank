#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    
    try{
        int num;
        num = stoi(S);
        cout<<num<<endl;
        
    }
    
    catch(exception a){
        cout<<"Bad String"<<endl;
    }

    return 0;
}
