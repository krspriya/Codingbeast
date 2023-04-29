#include <iostream>
using namespace std;
int main() {
                                                                            // HOLLOW REACTANGLE
  /*for (int i=0; i<3; i++){
    if(i==0 || i==2){
      for (int j=0; j<5; j++){
        cout<<"* ";
      }
    }
    else {
      cout<<"* ";
      for (int i=0; i<3; i++){
        cout<<"  ";
      }
      cout<<"* ";
    }
    cout<<endl;
  }*/

  // SECOND ONE
  /*for (int i=0; i<6; i++){
    if(i==0 || i==5){
      for (int j=0; j<5; j++){
        cout<<"* ";
      }
    }
    else {
      cout<<"* ";
      for (int i=0; i<6; i++){
        cout<<" ";
      }
      cout<<"* ";
    }
    cout<<endl;
  }*/

  // GENERAL ONE
  /* int rowCount, colCount;
   cin>>rowCount;
   cin>>colCount;
   for (int row=0; row<rowCount; row++){
     if (row==0 || row==rowCount-1){
       for (int col=0; col<colCount; col++){
         cout<<"* ";
       }
     }
     else {
       cout<<"* ";
       for (int i=0; i<colCount-2; i++){
         cout<<"  ";
       }
       cout<<"* ";
     }
     cout<<endl;
   }*/

  /* int m,n;
   cin>>m;
   cin>>n;
   for (int r=0; r<m; r++) {
     if (r==0 || r==m-1){
       for (int c=0; c<n; c++){
         cout<<"* ";
       }
     }
     else {
       cout<<"* ";
       for (int c=0; c<n-2; c++){
         cout<<"  ";
       }
       cout<<"* ";
     }
     cout<<endl;
   } */

                                                                            // UPPER PYRAMIDAL SHAPE
  // using for loop
  /*int n;
  cin>>n;
  for (int r=0; r<n; r++){
    for (int c=0; c<r+1; c++){
      cout<<"* ";
    }
    cout<<endl;
  }*/

  // using while loop
   /*int n;
   cin>>n;
   int r=0;
   while (r<=n){
     int c=1;
     while (c<=r+1){
       cout<<"* ";
       c++;
     }
     cout<<endl;
     r++;
   }*/

                                                                                       // LOWER PYRAMIDAL SHAPE
  // using for loop
  /*int n;
  cin>>n;
  for (int r=0; r<n; r++){
    for (int c=0; c<n-r; c++){
      cout<<"* ";
    }
    cout<<endl;
  }*/

  // using while loop
  /*int n;
  cin >> n;
  int r = 1;
  while (r <= n) {
    int c = 1;
    while (c <= n-r) {
      cout << "* ";
      c++;
    }
    cout << endl;
    r++;
  }*/



                                                                                     //NUMERICAL PYRAMID
     //using for loop
  
 /* int n;
  cin>>n;
 for (int r=0; r<n; r++){
  for (int c=0; c<r+1; c++){
    cout<<c+1;
  }
  cout<<endl;
}
  */

  //using while loop
  /*int n;
  cin>>n;
  int r=0;
  while (r<=n){
    int c=0;
    while (c<=r){
      cout<<c+1;
      c++;
    }
    cout<<endl;
    r++;
  }*/

  //inverted one
  //using for loop
  /*int n;
  cin>>n;
  for (int r=0; r<n; r++){
    for (int c=0; c<n-r; c++){
      cout<<c+1;
    }
    cout<<endl;
  } */

  // using while loop
 /* int n;
  cin>>n;
  int r=1;
  while (r<=n){
    int c=0;
    while(c<=n-r){
      cout<<c+1;
      c++;
    }
    cout<<endl;
    r++;
  }*/

                                                                                         //FULL PYRAMID

    //using for loop
 /*int n;
  cin>>n;
  for (int row=0; row<n; row++) {
    for (int col=0; col<n-row-1; col++){
      cout<<" ";
    }
    for (int col=0; col<row+1; col++){
      cout<<"* ";
    }
    cout<<endl;
  }*/


                                                                                     //INVERTED PYRAMID

   //using loop
  
  /*int n;
  cin>>n;
  for (int row=0; row<n; row++ ){
    for (int col=0; col<row; col++){
      cout<<" ";
    }
    for(int col=0; col<n-row; col++){
      cout<<"* ";
    }
    cout<<endl;
  }*/

                                                                                         // SOLID DIAMOND

  //using loop 
  
/*int n;
  cin>>n;
 for (int row=0; row<n; row++) {
    for (int col=0; col<n-row-1; col++){
      cout<<" ";
    }
    for (int col=0; col<row+1; col++){
      cout<<"* ";
    }
    cout<<endl;
  }
for (int row=0; row<n; row++ ){
    for (int col=0; col<row; col++){
      cout<<" ";
    }
    for(int col=0; col<n-row; col++){
      cout<<"* ";
    }
    cout<<endl;
  }*/



                                                                                     //SOLID HOLLOW DIAMOND 

  //using loops
 /* int n;
  cin>>n;
  for (int row=0; row<n; row++) {
    for (int col=0; col<n-row-1; col++){
      cout<<" ";
    }
    for (int col=0; col<2*row+1; col++){
      if (col==0){
        cout<<"*";
      }
      else if (col==2*row) {
        cout<<"*";
      }
      else {
        cout<<" ";
      }
    }
    cout<<endl;
  }

   for (int row=0; row<n; row++) {
    for (int col=0; col<row; col++){
      cout<<" ";
    }
    for (int col=0; col<2*n-2*row-1; col++){
      if (col==0){
        cout<<"*";
      }
      else if (col==2*n-2*row-2) {
        cout<<"*";
      }
      else {
        cout<<" ";
      }
    }
    cout<<endl;
  }*/


                                                                                  //FLIPED SOLID DIAMOND

       //using loop

  
 /* int n;
  cin>>n;
  for (int row=0; row<n; row++){
    for (int col=0; col<n-row; col++){
      cout<<"*";
    }
    for (int col=0; col<2*row+1; col++){
      cout<<" ";
    }
    for (int col=0; col<n-row; col++){
      cout<<"*";
    }
    cout<<endl;
  }

  for(int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
      cout<<"*";
    }
    for (int col=0; col<2*n-2*row-1; col++){
      cout<<" ";
    }
    for(int col=0; col<row+1; col++){
      cout<<"*";
    }
    cout<<endl;
  }*/

                                                                                       //FANCY PATTERN

   //using loop
  
 /* int n;
  cin>>n;
  for (int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
      cout<<row+1;
      if(col != row )
        cout<<"*";
    }
    cout<<endl;
  }  
  for (int row=0; row<n; row++){
    for (int col=0; col<n-row; col++){
      cout<<n-row;
      if (col!=n-row-1){
        cout<<"*";
      }
    }
    cout<<endl;
  }*/

                                                                                //ALPHABET PALINDROME PYRAMID

  int n;
  cin>>n;
  for (int row=0; row<n; row++) {
    int col;
    for (col=0; col<row+1; col++){
      cout<<A+1;
    }
    col=col-1;
    for(; col>=1; col-- ){
      cout<<col;
    }
    cout<<endl;
  }
}
