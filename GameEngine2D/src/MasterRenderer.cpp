#include "MasterRenderer.h"

void MasterRenderer::prepare() {
	glClearColor(1, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
}

void MasterRenderer::render(RawModel model) {
	glBindVertexArray(model.getVaoID());
	glEnableVertexAttribArray(0);
	glDrawElements(GL_TRIANGLES, model.getVertexCount(), GL_UNSIGNED_INT, nullptr);
	glDisableVertexAttribArray(0);
	glBindVertexArray(0);
}