// Editor.hpp
// Guy Simmons, 18th February 1997.

#ifndef	THE_EDITOR_HPP
#define	THE_EDITOR_HPP

#ifdef	__WINDOWS_386__
#pragma	warning	389	9 
#endif

#include	<editor/editor_lib.h>
#pragma warning( disable : 4244)
#include	<editor/alert.hpp>
#include	<editor/anim.h>
//#include	"building.hpp"
#include	<editor/controls.hpp>
#include	<editor/ctrl_set.hpp>
#include	<editor/map.h>
#include	<editor/thing.h>
#include	<editor/edit.h>
#include	<editor/edit_mod.hpp>
#include	<editor/engine.h>
#include	<editor/ed_utils.h>
#include	<editor/file_req.hpp>
#include	<editor/game_ed.h>
#include	<editor/icon.hpp>
#include	<editor/interface.hpp>
#include	<editor/k_frame_ed.hpp>
#include	<editor/k_framer.hpp>
#include	<editor/level_ed.hpp>
#include	<math.h>
#include	<editor/macros.h>
#include	<fallen/inline.h>
#include	<fallen/building.h>
#include	<editor/mode_tab.hpp>
#include	<editor/paint_tab.hpp>
#include	<editor/poly.h>
#include	<editor/prim.h>
#include	<editor/prim_draw.h>
#include	<editor/prim_edit.h>
#include	<editor/primative.hpp>
#include	<editor/scan.h>
#include	<editor/scrflc.h>
#include	<editor/thing_tab.h>
#include	<editor/window.hpp>
#include	<editor/undo.hpp>
#include	<fallen/game.h>
//#include	"collide.hpp"


#define	EDITOR_NORMAL		(1<<0)
#define	EDITOR_RECORD		(1<<1)

extern UBYTE				editor_status;

UBYTE						editor_loop(void);

#define	ShowWorkScreen(f)	editor_show_work_screen(f)
#define	ShowWorkWindow(f)	editor_show_work_window(f)

#define	LOAD_SHARED_TEXTURES	(1<<0)
#define	LOAD_UNSHARED_TEXTURES	(1<<1)
#define	LOAD_ALL_TEXTURES		(3)


#define	FREE_SHARED_TEXTURES	(1<<0)
#define	FREE_UNSHARED_TEXTURES	(1<<1)
#define	FREE_ALL_TEXTURES		(3)

extern	void	load_game_textures(UBYTE flags);
extern	void	free_game_textures(UBYTE flags);


#endif