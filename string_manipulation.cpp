#include <iostream>
#include <string>
using namespace std;

int main(){
    string st = "Welcome, Samrooz";
    cout<<"The string is: "<<st<<endl;
    cout<<"The length of the string: "<<st.length()<<endl;
    cout<<"The characetr at the index 1 of the string: "<<st.at(1)<<endl;
    cout<<"The acharacter at the index 1 using array way: "<<st[1]<<endl;
    cout<<"Is the string empty: "<<st.empty()<<endl;
    cout<<"Retrieve the substring from 3rd postion to 4th chracter: "<<st.substr(3,4)<<endl;
    cout<<"The Sub string replace by 'went': "<<st.replace(3,4,"went")<<endl;
    cout<<"Append a string 'end at last of the string: "<<st.append(" end")<<endl;
    cout<<"Append with the plus operator: "<<st+" end"<<endl;
    cout<<"the string 'insert' inserting at the 3rd position: "<<st.insert(3," insert")<<endl;
    cout<<"Input a sentence: ";
    getline(cin,st);
    cout<<st<<endl;
    return 0;
}