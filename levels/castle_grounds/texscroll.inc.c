void scroll_castle_grounds_dl_flower_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 528;
	int width = 16 * 0x20;
	int height = 16 * 0x20;

	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 0.4000000059604645;
	float frequencyY = 1.0;
	float offsetY = 0.0;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_flower_mesh_layer_4_vtx_0);

	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;	timeY += 1;
}

void scroll_castle_grounds() {
	scroll_castle_grounds_dl_flower_mesh_layer_4_vtx_0();
}
