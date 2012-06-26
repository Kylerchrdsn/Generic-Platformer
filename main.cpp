#include "SDL.h"
#include "TheGame.h"


int main(int argc, char* args[]){
    TheGame controller;
    enum gameStates {INTRO, SELECT_SAVE_FILE, LEVEL_I, MENU, EXIT};
    controller.setGameState(INTRO);

    if(!controller.initialize()){
        return 1;
    }

    while(controller.getGameState() != EXIT){
        switch(controller.getGameState()){
            case INTRO:
                if(!controller.doIntro()){
                    return 1;
                }
            break;

            case SELECT_SAVE_FILE:
                controller.doSelectSave();
            break;

            case LEVEL_I:
                if(!controller.doLevelI()){
                    return 1;
                }
            break;

            case MENU:
                controller.doMenu();
            break;
        };
    }

    controller.doExit();
    return 0;
}
