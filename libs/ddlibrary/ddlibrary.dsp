# Microsoft Developer Studio Project File - Name="ddlibrary" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=ddlibrary - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "ddlibrary.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ddlibrary.mak" CFG="ddlibrary - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ddlibrary - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "ddlibrary - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "ddlibrary - Win32 Release"

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

!ELSEIF  "$(CFG)" == "ddlibrary - Win32 Debug"

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

# Name "ddlibrary - Win32 Release"
# Name "ddlibrary - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\src\a3d_manager.cpp
# End Source File
# Begin Source File

SOURCE=.\src\async_file.cpp
# End Source File
# Begin Source File

SOURCE=.\src\bink_client.cpp
# End Source File
# Begin Source File

SOURCE=.\src\d3d_texture.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dc_low_level.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dd_manager.cpp
# End Source File
# Begin Source File

SOURCE=.\src\di_manager.cpp
# End Source File
# Begin Source File

SOURCE=.\src\drive.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ds_manager.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ff_manager.cpp
# End Source File
# Begin Source File

SOURCE=.\src\file_clump.cpp
# End Source File
# Begin Source File

SOURCE=.\src\g_debug.cpp
# End Source File
# Begin Source File

SOURCE=.\src\g_display.cpp
# End Source File
# Begin Source File

SOURCE=.\src\g_host.cpp
# End Source File
# Begin Source File

SOURCE=.\src\g_keyboard.cpp
# End Source File
# Begin Source File

SOURCE=.\src\g_mouse.cpp
# End Source File
# Begin Source File

SOURCE=.\src\g_work_screen.cpp
# End Source File
# Begin Source File

SOURCE=.\src\mfx_a3d.cpp
# End Source File
# Begin Source File

SOURCE=.\src\mfx_dc.cpp
# End Source File
# Begin Source File

SOURCE=.\src\mfx_miles.cpp
# End Source File
# Begin Source File

SOURCE=.\src\mfx_qmdx.cpp
# End Source File
# Begin Source File

SOURCE=.\src\net.cpp
# End Source File
# Begin Source File

SOURCE=.\src\qs_manager.cpp
# End Source File
# Begin Source File

SOURCE=.\src\sample_manager.cpp
# End Source File
# Begin Source File

SOURCE=.\src\tga.cpp
# End Source File
# Begin Source File

SOURCE=.\src\window_procs.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\..\include\ddlibrary\a3d_manager.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\async_file.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\bink_client.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\d3d_texture.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\dc_low_level.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\dd_lib.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\dd_manager.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\debug.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\di_manager.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\drive.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\ds_manager.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\ff_manager.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\file_clump.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\g_display.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\g_work_screen.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\mfx.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\mfx_miles.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\net.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\qs_manager.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\resource.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\sample_manager.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\snd_type.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\tga.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddlibrary\window_procs.h
# End Source File
# End Group
# End Target
# End Project
