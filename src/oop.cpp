#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:         
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;  // #include <list> is needed for this
public:
    // create a constructor for this class
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;   // when we create a channel, it will 
            // initially have 0 subscribers every time
    }

    void GetInfo() {
    cout << "Name: " << Name << endl;       // removed the ytChannel. from      
                     // start of Name, since this is within the class
        
    cout << "OwnerName: " << OwnerName << endl;
    cout << "SubscribersCount: " << SubscribersCount << endl;

    cout << "Videos: " << endl;

    for(string videoTitle: PublishedVideoTitles){
        cout << videoTitle << endl;
    } 
    }

    void Subscribe() {
        SubscribersCount++;
    }    

    void UnSubscribe() {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);

    }
};

int main() {
    // create an object

    // assign values to the properties of the object
    // ytChannel.Name = "CodeBeauty";
    // ytChannel.OwnerName = "Saldina";
    // ytChannel.SubscribersCount = 1800;
    // ytChannel.PublishedVideoTitles = {"C++ for beginners video 1", "HTML & CSS video 1", "C++ OOP Video 1"};

    // new way of doing the above code, using a constructor instead:
    YouTubeChannel ytChannel("CodeBeauty", "Saldina");
    // ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishVideo("C++ for beginners");
    // ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishVideo("HTML & CSS for beginners");
    // ytChannel.PublishedVideoTitles.push_back("C++ OOP");
    ytChannel.PublishVideo("C++ OOP");


    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.UnSubscribe();
    ytChannel.GetInfo();
    


}