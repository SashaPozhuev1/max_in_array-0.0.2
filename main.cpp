#include <iostream>
#include <sstream>

using namespace std;

bool proverka( int mass[ 10 ] ){
    
    string stroka;
    getline( cin, stroka );
    istringstream stream( stroka );
    
    bool prav = true;
    
    for( int i = 0; i < 10; i++){
        if( !( stream >> mass[ i ] ) ) {
           prav = false;
           break;
        }
    }
    
    return prav;
}

int Max_Element( int mass[ 10 ] ){

    int max = mass[0];
    
    for( int i = 0; i < 10; ++i ) {
        if( max < mass[i] ) {
            max = mass [i];
        }
    } 
    
    return max;
}

int main() {
    
    int mass1[ 10 ];
    int mass2[ 10 ];
       
    if ( ( proverka( mass1 ) ) && ( proverka( mass2 ) ) ) {
        cout << Max_Element( mass1 ) + Max_Element( mass2 );
            
    }
    else {
        cout << "An error has occured while reading numbers from line" << endl;
    }

    
    cin.get();
    return 0;
}
