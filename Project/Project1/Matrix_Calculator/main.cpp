/* 
 * File:   main.cpp
 * Author: Haolan Ye (Benjamin)
 * Created on October 10, 2015, 10:06 PM
 * Purpose: Project #1 --- Matrix Calculator
 */

#include <iostream>
#include <vector>
using namespace std;

#include "Matrix.h"
#include "LnkList.h" //Something wrong

void menu();
void mainMenu();
int **getArray(int &,int &);
void game();
void calculator();

int main(int argc, char** argv) {
//    char ch1;
//    do {
//        do {
//            mainMenu();
//            cout<<"You choose(1-3): ";
//            cin>>ch1;
//            if(ch1!='1'&&ch1!='2'&&ch1!='3') {
//                    cout<<"Invalid input"<<endl;
//            } 
//        } while(ch1!='1'&&ch1!='2'&&ch1!='3');
//        if(ch1=='1') {
//            calculator();
//        } else if(ch1=='2') {
//            game();
//        }
//        if(ch1!='3') {
//            cout<<"Click Enter to continue...";
//            cin.ignore();
//            cin.ignore();
//        }
//    } while(ch1!='3');
    

//    vector<Matrix> a;
//    LnkList<Matrix> a;
    //Add a matrix
    int row,col;//row and column
    string name="aaa";//name of the matrix
    //create a linked list to store the matrix
    int **array=getArray(row,col);//2-d array of matrix
    Matrix m(row,col,array,name);
//    a.push_back(m);
//    a.append(m); 
    cout<<endl<<endl<<"Here is your matrix:"<<endl;
    m.display();
//    a[0].display();
    //Multiply by a number
//    cout<<"Multiply by: ";
//    int num;
//    cin>>num;
//    m.multiByNum(num);
    
    //Test for add 2 matrix
    
    //Trch1pose
//    m.trch1pose();
//    a[0].trch1pose();
    //Test for matrix multiplication
//    Matrix n(m);
//    m.multiByMat(n);
//    cout<<endl<<endl;
//    m.determinant();
//    a[0].determinant();
//    m.inverse();
    
//    //Test the Cofactor
//    for(int i=0;i<m.getRow();i++) {
//        for(int j=0;j<m.getCol();j++) {
//            cout<<"Cofactor("<<i<<","<<j<<"): "<<m.cofactor(i,j)<<endl;
//        }
//    }
    m.inverse();
    
    return 0;
}

void game() {
    //select level
    cout<<"game"<<endl;
}

void calculator() {
    menu();
    cout<<"Cal"<<endl;
}

void mainMenu() {
    cout<<"***********     Main  Menu     ***********"<<endl;
    cout<<"1. MATRIX CALCULATOR"<<endl;
    cout<<"2. GAME"<<endl;
    cout<<"3. Exit"<<endl;
}

void menu() {
    cout<<"****WELCOME TO MATRIX CALCULATOR****"<<endl;
    cout<<endl<<endl<<"***********     Menu     ***********"<<endl<<endl;
    cout<<"1. Add a matrix"<<endl;
    cout<<"2. Subtract a matrix"<<endl;
    cout<<"3. Determinant"<<endl;
    cout<<"4. Transpose"<<endl;
    cout<<"5. Inverse"<<endl;
    cout<<"6. Multiply by a number"<<endl;
    cout<<"7. Multiply by a matrix"<<endl;
    cout<<"8. Exit"<<endl;
}

int **getArray(int &row,int &col) {
    cout<<"Row and Column of matrix: "<<endl;
    cin>>row>>col;
    //create rows
    int **array;
    array=new int*[row];
    //create columns
    for(int i=0;i<row;i++) {
        array[i]=new int[col];
    }
    
    //Get the elements of matrix
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>array[i][j];
        }
    }
    return array;
}