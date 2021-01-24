

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>


using namespace std;


int main() {
    
    string s;// = "12:46:05AM";
    cin >> s;
    
    do {
        //string s;
        
        vector <char> doggy;
        vector <char> kitty;
        char mike_tyson = ' ';
        int i = 0;
        int u = 0;
        int cnt = 0;
        do {

            mike_tyson = s[i];
            doggy.push_back(mike_tyson);
            i++;

        } while (s[i] != '\0');

        for (int i = 0; i < doggy.size(); i += 1) {
            if (doggy[i] < 58 && doggy[i] > 47) {

                kitty.push_back(doggy[i]);
            }
            if (doggy[i] == 'P' || doggy[i] == 'p') {
                cnt++;
            }
            if (doggy[i] == 'A' || doggy[i] == 'a') {
                cnt++;
                cnt++;
            }
        }

        doggy.erase(doggy.begin(), doggy.end());
        doggy.resize(0);

        if (cnt == 1 && kitty[1] != '2') {
            s = "";
            s = s.append(kitty.begin(), kitty.begin() + 2);
            i = stoi(s, 0, 0);
            i = i + 12;
        }
        else if (cnt == 1 && kitty[0] == '0' && kitty[1] == '2') {
            s = "";
            s = s.append(kitty.begin(), kitty.begin() + 2);
            i = stoi(s, 0, 0);
            i = i + 12;
        }
        else if (cnt == 1 && kitty[1] == '2') {
            s = "";
            s = s.append(kitty.begin(), kitty.begin() + 2);
            i = stoi(s, 0, 0);
        }
        else if (cnt == 2 && kitty[1] == '2') {
            s = "";
            i = 0;
        }
        else {
            s = "";
            s = s.append(kitty.begin() + 1, kitty.begin() + 2);
            i = stoi(s, 0, 0);
        }

        if (cnt == 1) {
            u = i / 10;
            mike_tyson = '0' + u;
            doggy.push_back(mike_tyson);
            u = i % 10;
            mike_tyson = '0' + u;
            doggy.push_back(mike_tyson);
        }
        else {
            u = 0;
            mike_tyson = '0' + u;
            doggy.push_back(mike_tyson);
            u = i / 1;
            mike_tyson = '0' + u;
            doggy.push_back(mike_tyson);

        }


        doggy.push_back(58);
        for (int heyhey = 2; heyhey < kitty.size() - 2; heyhey += 1) {
            doggy.push_back(kitty[heyhey]);
        }
        doggy.push_back(58);
        for (int holahola = 4; holahola < kitty.size(); holahola += 1) {
            doggy.push_back(kitty[holahola]);
        }


        s = "";
        s = s.append(doggy.begin(), doggy.begin() + doggy.size());

        cout << s << endl;
        cin >> s;
    } while (s != "exit");
	
    printf("\n");
    system("pause");
	return 0;

}