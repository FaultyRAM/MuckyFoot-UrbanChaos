# Microsoft Developer Studio Project File - Name="outro" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=outro - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "outro.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "outro.mak" CFG="outro - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "outro - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "outro - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "outro - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /Zp1 /MLd /W3 /GX /O2 /Ob2 /I "../../include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /D "_RELEASE" /D "FINAL" /FR /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ELSEIF  "$(CFG)" == "outro - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "../../include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /D "EDITOR" /FR /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ENDIF 

# Begin Target

# Name "outro - Win32 Release"
# Name "outro - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\src\back.cpp
# End Source File
# Begin Source File

SOURCE=.\src\cam.cpp
# End Source File
# Begin Source File

SOURCE=.\src\checker.cpp
# End Source File
# Begin Source File

SOURCE=.\src\credits.cpp
# End Source File
# Begin Source File

SOURCE=.\src\font.cpp
# End Source File
# Begin Source File

SOURCE=.\src\imp.cpp
# End Source File
# Begin Source File

SOURCE=.\src\l_map.cpp
# End Source File
# Begin Source File

SOURCE=.\src\main.cpp
# End Source File
# Begin Source File

SOURCE=.\src\matrix.cpp
# End Source File
# Begin Source File

SOURCE=.\src\mf.cpp
# End Source File
# Begin Source File

SOURCE=.\src\os.cpp
# End Source File
# Begin Source File

SOURCE=.\src\slap.cpp
# End Source File
# Begin Source File

SOURCE=.\src\tga.cpp
# End Source File
# Begin Source File

SOURCE=.\src\wire.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\..\include\outro\always.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\back.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\cam.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\checker.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\credits.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\font.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\imp.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\key.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\l_map.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\matrix.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\mf.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\midasdll.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\os.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\slap.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\tga.h
# End Source File
# Begin Source File

SOURCE=..\..\include\outro\wire.h
# End Source File
# End Group
# End Target
# End Project
