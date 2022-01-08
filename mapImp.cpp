#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    
    map <string,int> dict;
    vector <int> vec1;
    
    int num;
    string key;
    cin>>num;
    
    for (int i=0;i<num;i++){ 
        string name;
        int num;
        cin>>name;
        cin>>num;
        
        dict[name] = num;

    }
    
    map <string,int> :: iterator iter;
    iter = dict.begin();
    
    while(cin>>key){
        
        if((dict.find(key)!= dict.end())){
            cout<<key<<"="<<dict[key]<<endl;
        }
        
        else{
            cout<<"Not found"<<endl;
        }
        
    }
    
    
    
    return 0;
}
