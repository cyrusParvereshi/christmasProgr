//christmasProgram.cpp
//first version created by Cyrus Jehangir Parvereshi on 12/25/2017
// basically it's like a representation of being on Santa's lap at the mall
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
   string name; // name of user
   string input; // temporary input of each list item
   string answer; // answer to if the user is good or bad
   vector <string>christmasList; //need a vector of strings to store the items of the Christmas list

   cout << "HO HO HO!"<<endl; // program greeting
   cout<<"What's your name?\n";
   cin>>name;
   cout << "Hi "<<name<< " What would you like for Christmas?\nType \"done\" when you are finished\n"; // ask person what they want.
   //cin>>numItems;
   //cout << "Well OK! Tell me what would you like?\n";
  // for(int i = 0; i < numItems; i++){
   while(getline(cin, input) && input != "done")
         christmasList.push_back(input);
   //}
    cout<< "Alright so let me get this straight. You want: ";
    for(int j = 0; j < christmasList.size()-1; j++){
            cout<<christmasList[j];
        if (j == 0){
            cout<<" ";
        }
        else{
                cout << ", ";
        }
    }
    cout << "and "<< christmasList[christmasList.size()- 1] << ".\n"; // do this trick to print the list out nicely ;)
    cout << "Well now tell me, have you been good this year? Yes or no? ";
    cin>>answer;
    if(answer == "Yes" || answer == "yes"){
        cout << "Well then! I'll get right to it! MERRY CHRISTMAS!!!!!\n";
        cout << "Good bye now. NEXT!\n";
    }
    else if(answer == "No" || answer == "no"){
        cout << "Heh heh. Well if you have been bad, how can you expect me to help you?\n";
        cout << "I appreciate your honesty, now work on your other traits and I will get\n"
                "you what you want next year.\n";
        cout << "Until then, good bye! NEXT!\n";
    }
	  return 0;
}
