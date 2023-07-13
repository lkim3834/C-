# include <iostream>
# include <vector> 
#include <string>
using namespace std; 
int main(){
    vector < int> vertices; 
    vertices.push_back(1);
    vertices.push_back(2);
    vertices.push_back(3);
    for (int & vec : vertices){
        cout << vec << endl; 
    } 
    vertices.clear();  

}