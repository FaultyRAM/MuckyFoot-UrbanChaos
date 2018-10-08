# Microsoft Developer Studio Project File - Name="fallen" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=fallen - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "fallen.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "fallen.mak" CFG="fallen - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "fallen - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "fallen - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "fallen - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /Zp1 /MLd /W3 /GX /O2 /Ob2 /I "include" /I "src" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_RELEASE" /D "FINAL" /FR /YX"include/fallen/game.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0x409 /i "include" /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib amstrmid.lib binkw32.lib dinput.lib dxguid.lib winmm.lib /nologo /subsystem:windows /map /machine:I386

!ELSEIF  "$(CFG)" == "fallen - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "include" /I "src" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "EDITOR" /FR /YX"include/fallen/game.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0x409 /i "include" /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib amstrmid.lib binkw32.lib dinput.lib dxguid.lib winmm.lib /nologo /subsystem:windows /map /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "fallen - Win32 Release"
# Name "fallen - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\src\anim.cpp
# End Source File
# Begin Source File

SOURCE=.\src\animal.cpp
# End Source File
# Begin Source File

SOURCE=.\src\animtmap.cpp
# End Source File
# Begin Source File

SOURCE=.\src\attract.cpp
# End Source File
# Begin Source File

SOURCE=.\src\az.cpp
# End Source File
# Begin Source File

SOURCE=.\src\balloon.cpp
# End Source File
# Begin Source File

SOURCE=.\src\bang.cpp
# End Source File
# Begin Source File

SOURCE=.\src\barrel.cpp
# End Source File
# Begin Source File

SOURCE=.\src\bat.cpp
# End Source File
# Begin Source File

SOURCE=.\src\bike.cpp
# End Source File
# Begin Source File

SOURCE=.\src\briefing.cpp
# End Source File
# Begin Source File

SOURCE=.\src\build2.cpp
# End Source File
# Begin Source File

SOURCE=.\src\building.cpp
# End Source File
# Begin Source File

SOURCE=.\src\cache.cpp
# End Source File
# Begin Source File

SOURCE=.\src\cam.cpp
# End Source File
# Begin Source File

SOURCE=.\src\canid.cpp
# End Source File
# Begin Source File

SOURCE=.\src\chopper.cpp
# End Source File
# Begin Source File

SOURCE=.\src\cloth.cpp
# End Source File
# Begin Source File

SOURCE=.\src\cnet.cpp
# End Source File
# Begin Source File

SOURCE=.\src\collide.cpp
# End Source File
# Begin Source File

SOURCE=.\src\combat.cpp
# End Source File
# Begin Source File

SOURCE=.\src\controls.cpp
# End Source File
# Begin Source File

SOURCE=.\src\cop.cpp
# End Source File
# Begin Source File

SOURCE=.\src\darci.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dc_credits.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dike.cpp
# End Source File
# Begin Source File

SOURCE=.\src\dirt.cpp
# End Source File
# Begin Source File

SOURCE=.\src\door.cpp
# End Source File
# Begin Source File

SOURCE=.\src\draw_type.cpp
# End Source File
# Begin Source File

SOURCE=.\src\drip.cpp
# End Source File
# Begin Source File

SOURCE=.\src\effect.cpp
# End Source File
# Begin Source File

SOURCE=.\src\elev.cpp
# End Source File
# Begin Source File

SOURCE=.\src\enemy.cpp
# End Source File
# Begin Source File

SOURCE=.\src\env.cpp
# End Source File
# Begin Source File

SOURCE=.\src\env2.cpp
# End Source File
# Begin Source File

SOURCE=.\src\eway.cpp
# End Source File
# Begin Source File

SOURCE=.\src\fc.cpp
# End Source File
# Begin Source File

SOURCE=.\src\fire.cpp
# End Source File
# Begin Source File

SOURCE=.\src\fmatrix.cpp
# End Source File
# Begin Source File

SOURCE=.\src\fog.cpp
# End Source File
# Begin Source File

SOURCE=.\src\frontend.cpp
# End Source File
# Begin Source File

SOURCE=.\src\game.cpp
# End Source File
# Begin Source File

SOURCE=.\src\game_menu.cpp
# End Source File
# Begin Source File

SOURCE=.\src\glitter.cpp
# End Source File
# Begin Source File

SOURCE=.\src\grenade.cpp
# End Source File
# Begin Source File

SOURCE=.\src\guns.cpp
# End Source File
# Begin Source File

SOURCE=.\src\heap.cpp
# End Source File
# Begin Source File

SOURCE=.\src\hierarchy.cpp
# End Source File
# Begin Source File

SOURCE=.\src\hm.cpp
# End Source File
# Begin Source File

SOURCE=.\src\hm_psx.cpp
# End Source File
# Begin Source File

SOURCE=.\src\hook.cpp
# End Source File
# Begin Source File

SOURCE=.\src\inside2.cpp
# End Source File
# Begin Source File

SOURCE=.\src\interact.cpp
# End Source File
# Begin Source File

SOURCE=.\src\interface.cpp
# End Source File
# Begin Source File

SOURCE=.\src\io.cpp
# End Source File
# Begin Source File

SOURCE=.\src\io_psx.cpp
# End Source File
# Begin Source File

SOURCE=.\src\main.cpp
# End Source File
# Begin Source File

SOURCE=.\src\map.cpp
# End Source File
# Begin Source File

SOURCE=.\src\maths.cpp
# End Source File
# Begin Source File

SOURCE=.\src\mav.cpp
# End Source File
# Begin Source File

SOURCE=.\src\memory.cpp
# End Source File
# Begin Source File

SOURCE=.\src\mist.cpp
# End Source File
# Begin Source File

SOURCE=.\src\morph.cpp
# End Source File
# Begin Source File

SOURCE=.\src\music.cpp
# End Source File
# Begin Source File

SOURCE=.\src\nd.cpp
# End Source File
# Begin Source File

SOURCE=.\src\night.cpp
# End Source File
# Begin Source File

SOURCE=.\src\night_psx.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ns.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ob.cpp
# End Source File
# Begin Source File

SOURCE=.\src\overlay.cpp
# End Source File
# Begin Source File

SOURCE=.\src\pap.cpp
# End Source File
# Begin Source File

SOURCE=.\src\pause.cpp
# End Source File
# Begin Source File

SOURCE=.\src\pch_fall.cpp
# End Source File
# Begin Source File

SOURCE=.\src\pcom.cpp
# End Source File
# Begin Source File

SOURCE=.\src\person.cpp
# End Source File
# Begin Source File

SOURCE=.\src\pjectile.cpp
# End Source File
# Begin Source File

SOURCE=.\src\plat.cpp
# End Source File
# Begin Source File

SOURCE=.\src\play_cutscene.cpp
# End Source File
# Begin Source File

SOURCE=.\src\player.cpp
# End Source File
# Begin Source File

SOURCE=.\src\pow.cpp
# End Source File
# Begin Source File

SOURCE=.\src\prim.cpp
# End Source File
# Begin Source File

SOURCE=.\src\psystem.cpp
# End Source File
# Begin Source File

SOURCE=.\src\puddle.cpp
# End Source File
# Begin Source File

SOURCE=.\src\pyro.cpp
# End Source File
# Begin Source File

SOURCE=.\src\qedit.cpp
# End Source File
# Begin Source File

SOURCE=.\src\qmap.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ribbon.cpp
# End Source File
# Begin Source File

SOURCE=.\src\road.cpp
# End Source File
# Begin Source File

SOURCE=.\src\roper.cpp
# End Source File
# Begin Source File

SOURCE=.\src\save.cpp
# End Source File
# Begin Source File

SOURCE=.\src\shadow.cpp
# End Source File
# Begin Source File

SOURCE=.\src\sm.cpp
# End Source File
# Begin Source File

SOURCE=.\src\snipe.cpp
# End Source File
# Begin Source File

SOURCE=.\src\sound.cpp
# End Source File
# Begin Source File

SOURCE=.\src\sound_id.cpp
# End Source File
# Begin Source File

SOURCE=.\src\soundenv.cpp
# End Source File
# Begin Source File

SOURCE=.\src\spark.cpp
# End Source File
# Begin Source File

SOURCE=.\src\special.cpp
# End Source File
# Begin Source File

SOURCE=.\src\stair.cpp
# End Source File
# Begin Source File

SOURCE=.\src\start_scr.cpp
# End Source File
# Begin Source File

SOURCE=.\src\state.cpp
# End Source File
# Begin Source File

SOURCE=.\src\super_map.cpp
# End Source File
# Begin Source File

SOURCE=.\src\switch.cpp
# End Source File
# Begin Source File

SOURCE=.\src\thing.cpp
# End Source File
# Begin Source File

SOURCE=.\src\thug.cpp
# End Source File
# Begin Source File

SOURCE=.\src\tracks.cpp
# End Source File
# Begin Source File

SOURCE=.\src\trip.cpp
# End Source File
# Begin Source File

SOURCE=.\src\vehicle.cpp
# End Source File
# Begin Source File

SOURCE=.\src\walkable.cpp
# End Source File
# Begin Source File

SOURCE=.\src\wand.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ware.cpp
# End Source File
# Begin Source File

SOURCE=.\src\water.cpp
# End Source File
# Begin Source File

SOURCE=.\src\widget.cpp
# End Source File
# Begin Source File

SOURCE=.\src\wmove.cpp
# End Source File
# Begin Source File

SOURCE=.\src\xlat_str.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\include\fallen\america.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\animal.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\animate.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\animtmap.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\attract.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\az.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\balloon.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\bang.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\barrel.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\bat.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\bike.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\briefing.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\build2.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\building.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\cache.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\cam.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\camera.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\canid.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\chopper.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\cloth.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\cnet.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\collide.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\combat.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\command.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\controls.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\cop.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\darci.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\demo.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\dike.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\dirt.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\door.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\draw_type.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\drip.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\editor.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\elev.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\engine.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\enter.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\env.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\eway.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\fc.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\fire.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\fmatrix.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\fog.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\frontend.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\furn.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\game.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\game_menu.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\glitter.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\grenade.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\guns.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\heap.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\hierarchy.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\hm.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\hook.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\id.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\inline.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\inside2.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\interact.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\interface.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\io.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\lead.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\level.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\light.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\map.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\maths.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\mav.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\memory.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\mist.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\morph.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\music.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\nav.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\nd.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\night.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\no_server.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\ns.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\ob.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\overlay.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\pap.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\password.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\pause.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\pcom.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\person.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\pigeon.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\pjectile.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\plat.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\play_cutscene.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\player.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\pow.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\pq.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\psystem.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\puddle.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\pyro.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\qedit.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\qls.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\qmap.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\ribbon.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\road.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\roper.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\sample.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\save.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\sewer.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\shadow.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\sm.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\snipe.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\sound.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\sound_id.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\soundenv.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\spark.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\special.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\stair.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\start_scr.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\state.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\state_def.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\structs.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\super_map.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\switch.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\thing.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\thug.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\tracks.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\trip.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\vehicle.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\walkable.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\wall_hug.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\wand.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\ware.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\water.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\widget.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\wmove.h
# End Source File
# Begin Source File

SOURCE=.\include\fallen\xlat_str.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\ahead.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\arrowcop.cur
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bitmap1.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bitmap2.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bm_red1.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bm_red2.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bm_red3.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bm_red4.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bm_red5.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bm_red6.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bm_red7.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\bmp00001.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\dd_lib.rc
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\ico00001.ico
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\icon2.ico
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\mucky_lo.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\rightturn.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\scene_ic.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\stop.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\toolbar.bmp
# End Source File
# Begin Source File

SOURCE=.\libs\ddlibrary\resources\uturn.BMP
# End Source File
# End Group
# End Target
# End Project
