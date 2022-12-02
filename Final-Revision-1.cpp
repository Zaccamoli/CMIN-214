#include <iostream>
#include <string.h>
using namespace std;

int choiceOne;
int choiceTwo;
int choiceThree;
int choiceFour;
int choiceFive;
int choiceSix;
int choiceSeven;
int count;



int main() {
   char name[20];
   cout << "Please enter your Cosmonaut's name: ";
   cin >> name;
  cout << "In a daze, your eyes open, " << name << "...\nYour spacecraft is marooned on Ganymede, you are straded in darkness.\n";
  cout << "You try to remember what happenend to your space craft and realize you need to make it to the nearest outpost before your oxygen runs out...\n";
  cout << "Enter 1 to look up\nEnter 2 to look down\n";
  cin >> choiceOne;
  if (choiceOne == 1)
  {
    cout << "You see a glimmer of light just due West in the infinite blackness of space...\nCould have been another cruiser, could've just been a shooting star.\n" << endl;
  }
  if (choiceOne == 2)
  {
    cout << "You see a picture of your daughter back on Earth. You then open the cockpit and step outside\n" << endl;
  }
  cout << "You look around and see there are two sets of tracks, one heading West and one heading East.\nWhich direction do you go?\nEnter 1 for West\nEnter 2 for East\n" << endl;
  cin >> choiceTwo;
  if (choiceTwo == 1)
  {
    for (count=0;count<3;count++)
      cout << "zZzMayday!!!zZz\n";
    cout << "This is the USS Nostromo!\nDoes anyone read this!\n\nThe direction you chose led to a stronger SoS signal.";
    cout << "You reach a crossroad, down the left set of tracks you can just make out in the distance what looks like an abandoned refueling station,\nto the right you cannot make out any structures.\n\nEnter 1 to go left\nEnter 2 to go right\n";
    cin >> choiceThree;
        if (choiceThree == 1)
        cout << "You make your way down a dark set of rover tracks to discover a partially used oxygen tank. The guage reads twice as much in the tank than the one you're currently wearing.\nYou now have enough oxygen to keep on your path.\nGame Over...";
        if (choiceThree == 2)
        cout << "As you make your way down the dark tracks, you notice a craft landing; its the light you noticed from your cockpit! You make your way to the ship and are rescued.\nGame Over.";
  }
  if (choiceTwo == 2)
  {
    for (count=0;count<3;count++)
      cout << "Daddy!\n";
    cout << "Each call growing more faint than the last. The final thing you hear is the sound of your daughters voice begging you not to embark on your last mission\nGame Over.";
  }
}