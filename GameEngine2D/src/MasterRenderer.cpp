#include "MasterRenderer.h"

void MasterRenderer::prepare() {
	glClearColor(1, 1, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
}

void MasterRenderer::render(RawModel model) {
	glBindVertexArray(model.getVaoID());
	glEnableVertexAttribArray(0);
	glDrawArrays(GL_TRIANGLES, 0, model.getVertexCount());
	glDisableVertexAttribArray(0);
	glBindVertexArray(0);
}