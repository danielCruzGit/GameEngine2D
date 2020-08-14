#include "MasterRenderer.h"

MasterRenderer::MasterRenderer() {
	createProjectionMatrix();
}

void MasterRenderer::prepare() {
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1, 0, 0, 1);
}

void MasterRenderer::render() {
	prepare();
	shader.start();

	shader.stop();


	glBindVertexArray(model.getVaoID());
	glEnableVertexAttribArray(0);
	glDrawElements(GL_TRIANGLES, model.getVertexCount(), GL_UNSIGNED_INT, nullptr);
	glDisableVertexAttribArray(0);
	glBindVertexArray(0);
}