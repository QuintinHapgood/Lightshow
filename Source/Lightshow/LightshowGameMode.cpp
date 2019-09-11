// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LightshowGameMode.h"
#include "LightshowPlayerController.h"
#include "LightshowPawn.h"

ALightshowGameMode::ALightshowGameMode()
{
	// no pawn by default
	DefaultPawnClass = ALightshowPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ALightshowPlayerController::StaticClass();
}
