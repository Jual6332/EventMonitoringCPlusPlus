#include <iostream>
#include <string>

using namespace std;

const int totalPossibleEvents = 100;

class Event {
  private:
    string title = "";
    string description = "";
    string severity = "";
    string eventType = "";
  public:
    string getTitle(){
      return title;
    }
    void setTitle(string tle){
      title = tle;
    }
    string getDescription(){
      return description;
    }
    string getEventType(){
      return eventType;
    }
    void setDescription(string de){
      description = de;
    }
    string getSeverity(){
      return severity;
    }
    void setSeverity(string sv){
      severity = sv;
    }
    void setEventType(string ev){
      eventType = ev;
    }
};

int main(int argc, char** argv) {  
  // Define number of events
  int numEvents = 0;
  // Define number of router events
  int numRouterEvents = 0;
  // Define number of CPU events
  int numCPUEvents = 0;
  // Define the array collection of all events 
  Event allEvents[totalPossibleEvents];
  // Define the array collection of router events
  Event routerEvents[totalPossibleEvents];
  // Define the array collection of CPU events
  Event CPUEvents[totalPossibleEvents];

  // User-input
  string answer;

  // Define the event object instances
  Event event1;
  Event event2;
  Event event3;
  Event event4;
  Event event5;

  // Check if data has been ingested into the algorithm
  bool hasDataBeenIngested = false;

  while (answer != "Q" && answer != "q"){
    cout << "Welcome to the command-line event monitoring system for the Network Monitoring team at Ford!" << endl;
    cout << "Here are the current features:" << endl;
    cout << "1. Ingest event data" << endl;
    cout << "2. Display all event data" << endl;
    cout << "3. Display router event data" << endl;
    cout << "4. Display CPU event data" << endl;
    cout << "Q. Quit program" << endl;
    cout << endl;
    cout << "What do you want to do?" << endl;
    cin >> answer;
    if (answer == "1"){  
      // Incoming Event Data
      event1.setTitle("AEC router 1A is down.");
      event1.setDescription("Router went down on the weekend due to power outage.");
      event1.setSeverity("critical");
      allEvents[numEvents] = event1;
      routerEvents[numRouterEvents] = event1;
      numEvents++;
      numRouterEvents++;
    
      event2.setTitle("AEC router 2A is down.");
      event2.setDescription("Router went down on the weekend due to power outage.");
      event2.setSeverity("critical");
      allEvents[numEvents] = event2;
      routerEvents[numRouterEvents] = event2;
      numEvents++;
      numRouterEvents++;
    
      event3.setTitle("WHQ CPU27 is down.");
      event3.setDescription("CPU disconnected from server.");
      event3.setSeverity("medium");
      allEvents[numEvents] = event3;
      CPUEvents[numCPUEvents] = event3;
      numEvents++;
      numCPUEvents++;

      event4.setTitle("WHQ CPU38 is down.");
      event4.setDescription("CPU disconnected from server.");
      event4.setSeverity("medium");
      allEvents[numEvents] = event4;
      CPUEvents[numCPUEvents] = event4;
      numEvents++;
      numCPUEvents++;

      event5.setTitle("Electric plant router 12B is down.");
      event5.setDescription("Router went down on the weekend due to power outage.");
      event5.setSeverity("medium");
      allEvents[numEvents] = event5;
      routerEvents[numRouterEvents] = event5;
      numEvents++;
      numRouterEvents++;

      hasDataBeenIngested = true; // Update to reflect that the data has been ingested
      cout << "Data successfully ingested." << endl;
    } else if (answer == "2"){
      if (hasDataBeenIngested){
        // Display all event data
        cout << "Displaying all event data: " << endl;
        cout << "===========================" << endl;
        for (int i=0; i<numEvents; i++){
          cout << "Event name: "<< allEvents[i].getTitle() << endl;
          cout << "Event description: "<< allEvents[i].getDescription() << endl;
          cout << "Event severity: "<< allEvents[i].getSeverity() << endl;
          cout << endl;
        }
      } else {
        cout << "Data must be ingested before being displayed! Choose Option 1." << endl;
      }
    } else if (answer == "3"){
      if (hasDataBeenIngested){
        // Display router event data
        for (int i=0; i<numRouterEvents; i++){
          cout << "Event name: "<< routerEvents[i].getTitle() << endl;
          cout << "Event description: "<< routerEvents[i].getDescription() << endl;
          cout << "Event severity: "<< routerEvents[i].getSeverity() << endl;
          cout << endl;
        }
      } else {
        cout << "Data must be ingested before being displayed! Choose Option 1." << endl;
      }
    } else if (answer == "4"){
      if (hasDataBeenIngested){
        // Display router event data
        for (int i=0; i<numCPUEvents; i++){
          cout << "Event name: "<< CPUEvents[i].getTitle() << endl;
          cout << "Event description: "<< CPUEvents[i].getDescription() << endl;
          cout << "Event severity: "<< CPUEvents[i].getSeverity() << endl;
          cout << endl;
        }
      } else {
        cout << "Data must be ingested before being displayed! Choose Option 1." << endl;
      }
    } else if (answer == "Q" || answer == "q"){
      cout << "The program is stopping." << endl;
    } else {
      cout << "I'm sorry, I don't understand your request." << endl;
    }
  }
}
