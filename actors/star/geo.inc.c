#include "src/game/envfx_snow.h"

const GeoLayout star_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 0, 0, 0),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 46, 0, star_crown_mesh_layer_1),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, star_nom_001_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, star_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
