#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "duration.hpp"


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 

TEST_CASE ("test") {

    Duration d; 

    REQUIRE(d.getDuration() == 0); //tester om getDuration returnerer 0
    Duration l(15); //lægger 15 ind i Duration
    REQUIRE(l.getDuration() == 15); //tester om getDuration returnerer 15

    d.SetAlarm(20); //sætter alarm til 20
    REQUIRE(d.Tick() == false); // tester om Tick returnerer false
    REQUIRE(d.Tick(40) == true); //tester om Tick returnerer true
    REQUIRE(d.Tick() == true); //tester om Tick returnerer true

    REQUIRE(d.getAlarm() == 0); //tester om getAlarm returnerer 0

}
