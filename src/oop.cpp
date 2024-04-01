#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:         
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;  // #include <list> is needed for this

    // protected is needed here to allow these properties
    // to be accessed in the derived classes
protected:
    string OwnerName;
    int ContentQuality;

public:
    // create a constructor for this class
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;   // when we create a channel, it will 
            // initially have 0 subscribers every time
        ContentQuality = 0; // initialize 
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

    void CheckAnalytics() {
        if (ContentQuality < 5)
            cout << Name << " has low quality content." << endl;
        else
            cout << Name << " has great content." << endl;

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
        cout<< OwnerName << " is practising cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;
    }
};

class SingersYouTubeChannel: public YouTubeChannel {
    // add a constructor:
public:
    SingersYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName) {
        // the name and ownerName don't have to be initialized 
        // because it's inherited and this class already
        // knows how to initialize them. That's the purpose of
        // : YouTubeChannel(name, ownerName)
    }
    void Practice() {
        cout<< OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
        ContentQuality++;

    }
};


int main() {
    CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    SingersYouTubeChannel singersYtChannel("JohnSings", "John");
  
    cookingYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    return 0;
}