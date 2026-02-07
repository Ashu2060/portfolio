// #include<iostream>
// using namespace std;
// int main(){
//   int row, col, n;
//   cout << "Enter number of n: ";
//   cin >> n;
//    for( row=0; row<(n/2)+1; row++){
//     for( col=0; col<(n+n/2)-row; col++){
//    cout<<" ";
//     }
//      for( col=0; col<(2*row)+1; col++){
//       cout<<"*";
//      }
//      cout<<endl;
//   }
//   for( row=0; row<n; row++){
//   for( col=0; col<n/2; col++)
//     cout<<" ";
//     cout<<"* ";
//   }
// }



#include<iostream>
using namespace std;

int main(){
    int row, col, n;
    cout << "Enter number of n: ";
    cin >> n;

    // Upper pyramid
    for(row = 0; row <= n/2; row++){
        for(col = 0; col < (n + n/2) - row; col++){
            cout << " ";
        }
        for(col = 0; col < (2 * row) + 1; col++){
            cout << "*";
        }
        cout << endl;
    }

    // Stem
    for(row = 0; row < n; row++){
        for(col = 0; col < n + n/2; col++){
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}
