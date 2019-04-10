#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

main () {
    string w;
    cin >> w;
    int i;

    for(i=0; i<(int)w.size(); i++){

        if (w[i] == 'z') {
            cout << 'a';
        } else {
            cout << ++w[i];
        }

    }
}
