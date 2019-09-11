// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LightshowPlayerController.h"

ALightshowPlayerController::ALightshowPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
