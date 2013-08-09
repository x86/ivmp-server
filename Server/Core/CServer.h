//================ IV:Multiplayer - https://github.com/IVMultiplayer/IVMultiplayer ================
//
// File: main.cpp
// Project: Server.Core
// Author: xForce <xf0rc3.11@gmail.com>
// License: See LICENSE in root directory
//
//==============================================================================

#ifndef _CSERVER_H_
#define _CSERVER_H_

class CServer
{
public:
    CServer ( int argc, char ** argv );
    ~CServer ( );
    void DoPulse ( ){};
    bool IsRunning(){return true;};

    private 
};

#endif
