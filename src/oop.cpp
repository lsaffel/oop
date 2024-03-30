#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
    public:         // this makes the class attributes visible below
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;  // #include <list> is needed for this

    // create a constructor for this class
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;   // when we create a channel, it will 
            // initially have 0 subscribers every time
    }
};

int main() {
    // create an object

    // assign values to the attributes(?) of the object
    // ytChannel.Name = "CodeBeauty";
    // ytChannel.OwnerName = "Saldina";
    // ytChannel.SubscribersCount = 1800;
    // ytChannel.PublishedVideoTitles = {"C++ for beginners video 1", "HTML & CSS video 1", "C++ OOP Video 1"};

    // new way of doing the above code, using a constructor instead:
    YouTubeChannel ytChannel("CodeBeauty", "Saldina");

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;

    cout << "Videos: " << endl;

    for(string videoTitle: ytChannel.PublishedVideoTitles){
        cout << videoTitle << endl;
    } 

    YouTubeChannel ytChannel2("AmySings", "Amy");

    cout << "Name: " << ytChannel2.Name << endl;
    cout << "OwnerName: " << ytChannel2.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel2.SubscribersCount << endl;

    cout << "Videos: " << endl;

    for(string videoTitle: ytChannel2.PublishedVideoTitles){
        cout << videoTitle << endl;
    } 
}