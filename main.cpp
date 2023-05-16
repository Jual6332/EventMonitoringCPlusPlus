#include <iostream>
#include <string>

using namespace std;

const int totalPossibleEvents = 100;

class Site {
  private:
    string name = "";
    string status = ""; // Active, Maintenance, Decommissioned
    int yearEstablished = 0;
  public:
    string getSiteName(){
      return name;
    }
    void setSiteName(string nm){
      name = nm;
    }
};

class Event {
  private:
    string title = "";
    string description = "";
    string severity = "";
    string eventType = "";
    string site = "";
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
    void setDescription(string de){
      description = de;
    }
    string getSeverity(){
      return severity;
    }
    void setSeverity(string sv){
      severity = sv;
    }
    string getEventType(){
      return eventType;
    }
    void setEventType(string ev){
      eventType = ev;
    }
    string getSite(){
      return site;
    }
    void setSite(string st){
      site = st;
    }
};

/*
Event * filterBasedOnEventType(Event events,int numEvents){
  // Define and initialize event counters
  int numRouterEvents = 0;
  int numCPUEvents = 0;
  int numOtherEvents = 0;

  // Define event arrays for filtering based on eventType
  Event routerEvents[numRouterEvents];
  Event CPUEvents[numCPUEvents];
  Event otherEvents[numOtherEvents];

  // Iterate through events array and filter based on eventType
  for (int i=0; i<numEvents; i++){
    if (events[i].eventType == "router"){
      routerEvents[numRouterEvents] = events[i]; // Store in router events array
    } else if (events[i].eventType == "CPU"){
      CPUEvents[numCPUEvents] = events[i]; // Store in CPU events array
    } else {
      otherEvents[numOtherEvents] = events[i]; // Store in other events array
    }
  }

  // Define results array for sending the event arrays back to the main function
  
  Event result[3];
  
  result[0] = routerEvents;
  result[1] = CPUEvents;
  result[2] = otherEvents;

  return result;
}
*/

Event initializeWithEmptyEvent(){
  Event ev;
  ev.setTitle("");
  ev.setDescription("");
  ev.setSeverity("");
  ev.setEventType("");
  ev.setSite("");
  
  return ev;
}

void printAllEventData(Event allEvents[],int numEvents){
  // Display all event data
  cout << "Displaying all event data: " << endl;
  cout << "===========================" << endl;
  for (int i=0; i<numEvents; i++){
    cout << "EventID: " << i << endl;
    cout << "Event name: " << allEvents[i].getTitle() << endl;
    cout << "Event description: " << allEvents[i].getDescription() << endl;
    cout << "Event severity: " << allEvents[i].getSeverity() << endl;
    cout << "Event type: " << allEvents[i].getEventType() << endl;
    cout << "Event site: " << allEvents[i].getSite() << endl;
    cout << endl;
  }
}

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
  Event event6;

  // Initialize the new events to empty event objects
  event1 = initializeWithEmptyEvent();
  event2 = initializeWithEmptyEvent();
  event3 = initializeWithEmptyEvent();
  event4 = initializeWithEmptyEvent();
  event5 = initializeWithEmptyEvent();
  event6 = initializeWithEmptyEvent();

  // Declare a filtered array of event objects
  //Event filteredArray;

  // Check if data has been ingested into the algorithm
  bool hasDataBeenIngested = false;

  while (answer != "Q" && answer != "q"){
    cout << "Welcome to the command-line event monitoring system for the Network Monitoring team at Ford!" << endl;
    cout << "Here are the current features:" << endl;
    cout << "1. Ingest event data" << endl;
    cout << "2. Display all event data" << endl;
    cout << "3. Display router event data" << endl;
    cout << "4. Display CPU event data" << endl;
    cout << "5. Change an event's data" << endl;
    cout << "Q. Quit program" << endl;
    cout << endl;
    cout << "What do you want to do?" << endl;
    cin >> answer;
    if (answer == "1"){  
      // Incoming Event Data
      event1.setTitle("AEC router 1A is down.");
      event1.setDescription("Router went down on the weekend due to power outage.");
      event1.setSeverity("critical");
      event1.setEventType("router");
      event1.setSite("AEC");
      allEvents[numEvents] = event1;
      routerEvents[numRouterEvents] = event1;
      numEvents++;
      numRouterEvents++;
    
      event2.setTitle("AEC router 2A is down.");
      event2.setDescription("Router went down on the weekend due to power outage.");
      event2.setSeverity("critical");
      event2.setEventType("router");
      event2.setSite("AEC");
      allEvents[numEvents] = event2;
      routerEvents[numRouterEvents] = event2;
      numEvents++;
      numRouterEvents++;
    
      event3.setTitle("WHQ CPU27 is down.");
      event3.setDescription("CPU disconnected from server.");
      event3.setSeverity("medium");
      event3.setEventType("cpu");
      event3.setSite("WHQ");
      allEvents[numEvents] = event3;
      CPUEvents[numCPUEvents] = event3;
      numEvents++;
      numCPUEvents++;

      event4.setTitle("WHQ CPU38 is down.");
      event4.setDescription("CPU disconnected from server.");
      event4.setSeverity("medium");
      event4.setEventType("cpu");
      event4.setSite("WHQ");
      allEvents[numEvents] = event4;
      CPUEvents[numCPUEvents] = event4;
      numEvents++;
      numCPUEvents++;

      event5.setTitle("Maintenance room router 1B is down.");
      event5.setDescription("Router went down on the weekend due to power outage.");
      event5.setSeverity("medium");
      event5.setEventType("router");
      event5.setSite("AEC");
      allEvents[numEvents] = event5;
      routerEvents[numRouterEvents] = event5;
      numEvents++;
      numRouterEvents++;

      event6.setTitle("Electric plant router 12B is down.");
      event6.setDescription("Router went down on the weekend due to power outage.");
      event6.setSeverity("critical");
      event6.setEventType("router");
      event6.setSite("Electric plant");
      allEvents[numEvents] = event6;
      routerEvents[numRouterEvents] = event6;
      numEvents++;
      numRouterEvents++;

      

      hasDataBeenIngested = true; // Update to reflect that the data has been ingested
      cout << "Data successfully ingested." << endl;

      /*
      // Declare result array and initialize with empty events
      Event result[numEvents][numEvents];

      // Declare and initialize empty event
      Event e0;
      e0.setTitle("");
      e0.setDescription("");
      e0.setSeverity("");
      e0.setEventType("");

      // Initialize result array with empty events
      for (int i=0; i<numEvents; i++){
        for (int j=0; j<numEvents; j++){
          result[i][j] = e0;
        }
      }
      */
      // Filter event dataset by event type
      //result = filterBasedOnEventType(&allEvents,numEvents);
      
    } else if (answer == "2"){
      if (hasDataBeenIngested){
        printAllEventData(allEvents,numEvents);
      } else {
        cout << "Data must be ingested before being displayed! Choose Option 1 first." << endl;
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
        cout << "Data must be ingested before being displayed! Choose Option 1 first." << endl;
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
        cout << "Data must be ingested before being displayed! Choose Option 1 first." << endl;
      }
    } else if (answer == "5"){
      if (hasDataBeenIngested){
        int changedEventID = 0;
        int changedDetailID = 0;
        printAllEventData(allEvents,numEvents);

        cout << "For which event would you like to change the details? (Enter numeric event ID)" << endl;
        cin >> changedEventID; // The eventID of the event to change
        cout << "Which detail would you like to change? (Enter numeric event ID)" << endl;
        cout << "1. Title" << endl;
        cout << "2. Description" << endl;
        cout << "3. Severity" << endl;
        cout << "4. EventType" << endl;
        cout << "5. Site" << endl;
        
        cin >> changedDetailID;

        string changedDetail = "";
        string newValueChangedDetail = "";

        if (changedDetailID == 1){
          changedDetail = "Title";
        } else if (changedDetailID == 2){
          changedDetail = "Description";
        } else if (changedDetailID == 3){
          changedDetail = "Severity";
        } else if (changedDetailID == 4) {
          changedDetail = "EventType";
        } else if (changedDetailID == 5){
          changedDetail = "site";
        } else {
          cout << "I didn't understand your input. Try again." << endl;
        }

        cout << "What is the new value for the " << changedDetail << " detail?" << endl;

        cin >> newValueChangedDetail;

        if (changedDetailID == 1){
          allEvents[changedEventID].setTitle(newValueChangedDetail);
        } else if (changedDetailID == 2){
          allEvents[changedEventID].setDescription(newValueChangedDetail);
        } else if (changedDetailID == 3){
          allEvents[changedEventID].setSeverity(newValueChangedDetail);
        } else if (changedDetailID == 4){
          allEvents[changedEventID].setEventType(newValueChangedDetail);
        } else if (changedDetailID == 5){
          allEvents[changedEventID].setSite(newValueChangedDetail);
        }
      } else {
        cout << "Data must be ingested before being displayed! Choose Option 1 first." << endl;
      }
    } else if (answer == "Q" || answer == "q"){
      cout << "The program is stopping." << endl;
    } else {
      cout << "I'm sorry, I don't understand your request." << endl;
    }
  }
}
