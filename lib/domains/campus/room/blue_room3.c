#include <lib.h>
inherit LIB_ROOM;

protected void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("a blue room");
    SetLong("This is a blue room. Probability Lab 3 is west.");
    SetExits( ([
                "west" : "/domains/campus/room/plab"
                ]) );
    SetDoor("west","/domains/campus/doors/blue_door3");
}

void init(){
    ::init();
}
