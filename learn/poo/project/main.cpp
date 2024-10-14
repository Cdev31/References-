#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum class TypeRoom {
    Individual, 
    Double,
    Suite
};

struct Client {
    string name;
    string address;
    int age;

    Client( string name, string address, int age ) : 
    name( name ), address( address ), age( age) {}
};

class Room {
    
    private:
      int number;
      TypeRoom type;
      bool isAvailable;

    public:
       Room( int number, TypeRoom t ):
       number( number ), type( t ){};  

       void toBook (){
          isAvailable = false;
       }

       bool available() const{
        return isAvailable;
       }

       int getNumber() const {
        return number;
       }

       void showTypeRoom() const {
          cout << "Habitacion numero " << number << " es de tipo ";
          switch (type)
          {
            case TypeRoom::Individual:
                cout << "Individual";
                 break;
            case TypeRoom::Double:
              cout << "Doble";
              break;
            case TypeRoom::Suite:
               cout << "Suite";
               break;   
          default:
            break;
          }
       }
};

class Hotel{
    private:
      string name;
      vector<Room> rooms;

    public:
       Hotel( string name ): name( name ) {};

    void addRoom( Room room ){
        rooms.push_back( room );
    }   

    void showRooms( ) const {
        for( const auto& room : rooms ){
            room.showTypeRoom();
            cout << "\n Disponible " << ( room.available() ? " Si " : " No " ) << "\n";
        }
    }
};

int main(){

    Hotel hotel("Hotel La Luna");

    hotel.addRoom( Room(101, TypeRoom::Individual ) );
    hotel.addRoom( Room(102, TypeRoom::Individual ) );
    hotel.addRoom( Room(103, TypeRoom::Suite ) );
    hotel.addRoom( Room(104, TypeRoom::Double ) );

    hotel.showRooms();

    return 0;
}