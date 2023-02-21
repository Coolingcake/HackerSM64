void scroll_bob_dl_fuzz_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 64;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_fuzz_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;
	deltaY = (int)(5.0 * 0x20 * random_float() * random_sign()) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_bob_dl_monster_fuzz_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 60;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_monster_fuzz_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;
	deltaY = (int)(5.0 * 0x20 * random_float() * random_sign()) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_bob_dl_TV_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_TV_mesh_layer_1_vtx_1);

	deltaX = (int)(0.25 * 0x20 * random_float() * random_sign()) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_fuzzDEFALT_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 64;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_fuzzDEFALT_001_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;
	deltaY = (int)(5.0 * 0x20 * random_float() * random_sign()) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_bob_dl_TV_001_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_TV_001_mesh_layer_1_vtx_1);

	deltaX = (int)(0.25 * 0x20 * random_float() * random_sign()) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_fuzzDEFALT_002_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 64;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_fuzzDEFALT_002_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;
	deltaY = (int)(5.0 * 0x20 * random_float() * random_sign()) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_bob_dl_TV_002_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_TV_002_mesh_layer_1_vtx_1);

	deltaX = (int)(0.25 * 0x20 * random_float() * random_sign()) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_fuzzDEFALT_003_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 64;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_fuzzDEFALT_003_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;
	deltaY = (int)(5.0 * 0x20 * random_float() * random_sign()) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_bob_dl_TV_003_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_TV_003_mesh_layer_1_vtx_1);

	deltaX = (int)(0.25 * 0x20 * random_float() * random_sign()) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_fuzzDEFALT_004_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 64;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_fuzzDEFALT_004_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;
	deltaY = (int)(5.0 * 0x20 * random_float() * random_sign()) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_bob_dl_TV_004_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_TV_004_mesh_layer_1_vtx_1);

	deltaX = (int)(0.25 * 0x20 * random_float() * random_sign()) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_TV_005_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_TV_005_mesh_layer_1_vtx_1);

	deltaX = (int)(0.25 * 0x20 * random_float() * random_sign()) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob() {
	scroll_bob_dl_fuzz_mesh_layer_1_vtx_0();
	scroll_bob_dl_monster_fuzz_mesh_layer_1_vtx_0();
	scroll_bob_dl_TV_mesh_layer_1_vtx_1();
	scroll_bob_dl_fuzzDEFALT_001_mesh_layer_1_vtx_0();
	scroll_bob_dl_TV_001_mesh_layer_1_vtx_1();
	scroll_bob_dl_fuzzDEFALT_002_mesh_layer_1_vtx_0();
	scroll_bob_dl_TV_002_mesh_layer_1_vtx_1();
	scroll_bob_dl_fuzzDEFALT_003_mesh_layer_1_vtx_0();
	scroll_bob_dl_TV_003_mesh_layer_1_vtx_1();
	scroll_bob_dl_fuzzDEFALT_004_mesh_layer_1_vtx_0();
	scroll_bob_dl_TV_004_mesh_layer_1_vtx_1();
	scroll_bob_dl_TV_005_mesh_layer_1_vtx_1();
}
