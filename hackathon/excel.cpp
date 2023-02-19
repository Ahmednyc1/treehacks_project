//#include <climits>
//#include <fstream>
//#include <cstdlib>
//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
   /*ifstream fin("csv hacks.tsv");
    if(fin.fail()){
        cerr<<"File cannot be opened for reading."<<endl;
        exit(1);
    }
  string line ;
 while(getline(fin,line)){
    for (size_t i = 0; i < line.length(); i++) {
            if (line[i] == ',') {
                line.insert(i+1, " ");
                i++;
            }
    }
    for (size_t i=0 ;i<line.length();i++){
        if(line[i]=='"'){
            line.insert(i+1," ");
            i++;
        }
    }
cout<<line<<endl;  
double Distance =0;
while(fin >>distance){
      // 
 }


}    */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream fin("csv_hacks.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        double distance;
        if (iss >> distance) {
            // Do something with the distance value
            cout << "Distance: " << distance << endl;
        }
    }

    return 0;
}







//if distance is more than 15 miles , dont show up inn the data . 
//simple if statemnets but how do i get the data , i have to read it just read it ahmed 
//
