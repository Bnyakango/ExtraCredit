/**
 * @file main.cpp
 * @brief This is a test of CMake, doxygen, and GitHub.
 * @details This is the long brief at the top of main.cpp.
 * @author Seth McNeill
 * @date 1/28/2021
 * 
 */

#include<iostream>
#include<iomanip>
using namespace std;
//A function to pring the adjacency matrix.

void PrintBen(int ben[][10],int n){
    int i,j;
    cout<<"\n\n"<<setw(4)<<" ";
    for(i=0;i<n;i++)
        cout<<setw(3)<<"("<<i+1<<")";
    cout<<"\n\n";
    //Print 1 if the corresponding vertexes are connected otherwise 0.
    for(i=0;i<n;i++){
        cout<<setw(3)<<"("<<i+1<<")";
        for(j=0;j<n;j++){
            cout<<setw(4)<<ben[i][j];
        }
        cout<<"\n\n";
    }
}
int main(){
    int i,j,v;
    cout<<"Enter the number of vertexes: ";
    cin>>v;
    int ben[10][10];
    cout<<"\n";
    
    //Take input of the adjacency of each pair of vertexes
    for(i=0;i<v;i++){
        for(j=i;j<v;j++){
            if(i!=j){
                cout<<"Enter 1 if vertex "<<i+1<<" is adjacent to "<<j+1<<" , otherwise 0: ";
                cin>>ben[i][j];
                ben[j][i]=ben[i][j];

            }
            else
                ben[i][j]=0;
            

        }

    }
    PrintBen(ben,v);
    
    return 0;


}

//lets run the program

        