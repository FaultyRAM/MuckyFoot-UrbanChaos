# Microsoft Developer Studio Project File - Name="ddengine" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=ddengine - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "ddengine.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ddengine.mak" CFG="ddengine - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ddengine - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "ddengine - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "ddengine - Win32 Release"

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
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ELSEIF  "$(CFG)" == "ddengine - Win32 Debug"

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
# SUBTRACT CPP /YX /Yc /Yu
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

# Name "ddengine - Win32 Release"
# Name "ddengine - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\src\aa.cpp
# End Source File
# Begin Source File

SOURCE=.\src\aeng.cpp
# End Source File
# Begin Source File

SOURCE=.\src\break_timer.cpp
# End Source File
# Begin Source File

SOURCE=.\src\build.cpp
# End Source File
# Begin Source File

SOURCE=.\src\comp.cpp
# End Source File
# Begin Source File

SOURCE=.\src\cone.cpp
# End Source File
# Begin Source File

SOURCE=.\src\console.cpp
# End Source File
# Begin Source File

SOURCE=.\src\crinkle.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dc_back.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dc_credits.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dc_font.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dc_os.cpp
# End Source File
# Begin Source File

SOURCE=.\src\draw_extra.cpp
# End Source File
# Begin Source File

SOURCE=.\src\facet.cpp
# End Source File
# Begin Source File

SOURCE=.\src\far_facet.cpp
# End Source File
# Begin Source File

SOURCE=.\src\fast_prim.cpp
# End Source File
# Begin Source File

SOURCE=.\src\figure.cpp
# End Source File
# Begin Source File

SOURCE=.\src\flame_engine.cpp
# End Source File
# Begin Source File

SOURCE=.\src\font.cpp
# End Source File
# Begin Source File

SOURCE=.\src\font_2d.cpp
# End Source File
# Begin Source File

SOURCE=.\src\font_3d.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ic.cpp
# End Source File
# Begin Source File

SOURCE=.\src\map.cpp
# End Source File
# Begin Source File

SOURCE=.\src\matrix.cpp
# End Source File
# Begin Source File

SOURCE=.\src\menu_font.cpp
# End Source File
# Begin Source File

SOURCE=.\src\mesh.cpp
# End Source File
# Begin Source File

SOURCE=.\src\message.cpp
# End Source File
# Begin Source File

SOURCE=.\src\n_gamut.cpp
# End Source File
# Begin Source File

SOURCE=.\src\oval.cpp
# End Source File
# Begin Source File

SOURCE=.\src\pack.cpp
# End Source File
# Begin Source File

SOURCE=.\src\panel.cpp
# End Source File
# Begin Source File

SOURCE=.\src\plan_map.cpp
# End Source File
# Begin Source File

SOURCE=.\src\poly.cpp
# End Source File
# Begin Source File

SOURCE=.\src\poly_page.cpp
# End Source File
# Begin Source File

SOURCE=.\src\poly_point.cpp
# End Source File
# Begin Source File

SOURCE=.\src\poly_render_state.cpp
# End Source File
# Begin Source File

SOURCE=.\src\qeng.cpp
# End Source File
# Begin Source File

SOURCE=.\src\quaternion.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ray.cpp
# End Source File
# Begin Source File

SOURCE=.\src\render_state.cpp
# End Source File
# Begin Source File

SOURCE=.\src\shape.cpp
# End Source File
# Begin Source File

SOURCE=.\src\sky.cpp
# End Source File
# Begin Source File

SOURCE=.\src\smap.cpp
# End Source File
# Begin Source File

SOURCE=.\src\sprite.cpp
# End Source File
# Begin Source File

SOURCE=.\src\super_crinkle.cpp
# End Source File
# Begin Source File

SOURCE=.\src\super_facet.cpp
# End Source File
# Begin Source File

SOURCE=.\src\sw.cpp
# End Source File
# Begin Source File

SOURCE=.\src\text.cpp
# End Source File
# Begin Source File

SOURCE=.\src\texture.cpp
# End Source File
# Begin Source File

SOURCE=.\src\tom.cpp
# End Source File
# Begin Source File

SOURCE=.\src\truetype.cpp
# End Source File
# Begin Source File

SOURCE=.\src\vertex_buffer.cpp
# End Source File
# Begin Source File

SOURCE=.\src\wibble.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\..\include\ddengine\aa.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\aeng.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\break_timer.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\bucket.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\build.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\comp.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\cone.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\console.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\crinkle.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\dc_back.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\dc_credits.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\dc_font.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\dc_os.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\draw_extra.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\engine.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\facet.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\fall.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\far_facet.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\fast_prim.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\figure.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\flame_engine.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\font.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\font_2d.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\font_3d.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\gamut.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\ic.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\map.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\matrix.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\menu_font.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\mesh.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\message.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\n_gamut.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\oval.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\pack.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\panel.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\plan_map.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\poly.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\poly_page.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\poly_point.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\qeng.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\quaternion.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\ray.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\render_state.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\shape.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\sky.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\smap.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\sprite.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\super_crinkle.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\super_facet.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\sw.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\text.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\texture.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\truetype.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\vertex_buffer.h
# End Source File
# Begin Source File

SOURCE=..\..\include\ddengine\wibble.h
# End Source File
# End Group
# End Target
# End Project
