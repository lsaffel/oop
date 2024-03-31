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

    // adds a new title to the videos list
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);

    }
};

class CookingYouTubeChannel: public YouTubeChannel {
    // add a constructor:
public:
    CookingYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName) {
        // the name and ownerName don't have to be initialized 
        // because it's inherited and this class already
        // knows how to initialize them. That's the purpose of
        // : YouTubeChannel(name, ownerName)
    }
    void Practice() {
        cout << "practising cooking, learning new recipes, experimenting with spices..." << endl;
    }
};

int main() {
    CookingYouTubeChannel CookingYtChannel("Amy's Kitchen", "Amy");
    CookingYtChannel.PublishVideo("Apple pie");
    CookingYtChannel.PublishVideo("Chocolate cake");
    CookingYtChannel.Subscribe();
    CookingYtChannel.Subscribe();
    CookingYtChannel.GetInfo();

    CookingYtChannel.Practice();


  
    return 0;
}