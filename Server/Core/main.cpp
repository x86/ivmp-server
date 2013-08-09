//================ IV:Multiplayer - https://github.com/IVMultiplayer/IVMultiplayer ================
//
// File: main.cpp
// Project: Server.Core
// Author: xForce <xf0rc3.11@gmail.com>
// License: See LICENSE in root directory
//
//==============================================================================

#include "stdafx.h"

CServer* g_pServer;

int main ( int argc, char ** argv )
{
    // Handle command-line options
    if ( argc == 2 )
    {
        if ( strcmp ( argv[1], "/?" ) == 0 || strcmp ( argv[1], "--h" ) == 0 || strcmp ( argv[1], "--help" ) == 0 )
        {
            printf ( "Usage: %s [OPTION]\n\n", "ivmpserver" );
            printf ( "  -s                   Run server in silent mode\n" );
            printf ( "  -t                   Run server with a simple console (without ncurses)\n" );
            printf ( "  --settings [FILE]    Alternate settings.xml file\n" );
            printf ( "  --ip [ADDR]          Set IP address\n" );
            printf ( "  --port [PORT]        Set port\n" );
            printf ( "  --httpport [PORT]    Set http port\n" );
            printf ( "  --maxplayers [1-%d]  Set maxplayers\n", 32/*MAX_PLAYERS*/ );
            return 1;
        }
    }

    // Startup the server
    g_pServer = new CServer ( argc, argv );

    if ( g_pServer )
    {
        // Pulse
        while ( g_pServer->IsRunning ( ) )
        {
            g_pServer->DoPulse ( );
        }

        return 1;
    }

    return 0;
}
