// add 2 large no. as a which are out of scope for int data types


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str1 ="128";
    string str2 ="114";
    // cin>>str1>>str2;
    string str3;
    int int1;
    int int2;
    int int3;
    int int4=0;
    string str4;
    string str5;
    string str6="";
    string str7="";
    for(int i = str1.length()-1; i >=0; i--)
    {
        str3=str1.at(i);
        int1=stoi(str3);
    
        str4=str2.at(i);
        int2=stoi(str4);
        if(i==0){
            int4=1;
        }
        int3=int1+int2+int4;
        str5=to_string(int3);
        if(str5.length()==2){
            str6=str6+str5.at(1);
            str7=str5[0];
            int4 = stoi(str7);
        } else{
        str6 += str5;
        }
    }
    reverse(str6.begin(), str6.end());
    cout<<str6; 
}
