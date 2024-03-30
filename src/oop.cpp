#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
    public:         // this makes the class attributes visible below
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;  // #include <list> is needed for this
};

int main() {
    // create an object
    YouTubeChannel ytChannel;

    // assign values to the attributes(?) of the object
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideoTitles = {"C++ for beginners video 1", "HTML & CSS video 1", "C++ OOP Video 1"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;

    cout << "Videos: " << endl;

    for(string videoTitle: ytChannel.PublishedVideoTitles){
        cout << videoTitle << endl;
    } 
}