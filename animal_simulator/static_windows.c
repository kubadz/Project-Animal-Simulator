#include "static_windows.h"

void render_static_windows(struct texture activeEventsWindowTextTexture, struct texture needsBarsWindowTextTexture, struct texture textEventsWindowTextTexture)
{
	render_static_window(activeEventsWindowTextTexture, ACTIVE_EVENTS_WINDOW_TLCX, ACTIVE_EVENTS_WINDOW_TLCY, ACTIVE_EVENTS_WINDOW_WIDTH, ACTIVE_EVENTS_WINDOW_HEIGHT, 140, 10, ACTIVE_EVENTS_WINDOW_RGBA_COLOR);
	render_static_window(needsBarsWindowTextTexture, NEEDS_BARS_WINDOW_TLCX, NEEDS_BARS_WINDOW_TLCY, NEEDS_BARS_WINDOW_WIDTH, NEEDS_BARS_WINDOW_HEIGHT, 200, 10, NEEDS_BARS_WINDOW_RGBA_COLOR);
	render_static_window(textEventsWindowTextTexture, TEXT_EVENTS_WINDOW_TLCX, TEXT_EVENTS_WINDOW_TLCY, TEXT_EVENTS_WINDOW_WIDTH, TEXT_EVENTS_WINDOW_HEIGHT, 20, 10, TEXT_EVENTS_WINDOW_RGBA_COLOR);
}

void render_static_window(struct texture staticWindowTextTexture, int x, int y, int w, int h, int leftTextPadding, int topTextPadding, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
	SDL_Rect renderQuad = { x, y, w, h };
	SDL_SetRenderDrawColor(renderer, r, g, b, a);
	SDL_RenderFillRect(renderer, &renderQuad);
	SDL_Rect_Set(&renderQuad, x + leftTextPadding, y + topTextPadding, staticWindowTextTexture.width, staticWindowTextTexture.height);
	SDL_RenderCopy(renderer, staticWindowTextTexture.texture, NULL, &renderQuad);
}

void load_static_windows_text_textures(struct texture * activeEventsWindowTextTexture, struct texture * needsBarsWindowTextTexture, struct texture * textEventsWindowTextTexture)
{
	SDL_Color textColor = { 0, 0, 0 };
	texture_LoadFromRenderedText(activeEventsWindowTextTexture, "Active Events", textColor);
	texture_LoadFromRenderedText(needsBarsWindowTextTexture, "Needs Bars", textColor);
	texture_LoadFromRenderedText(textEventsWindowTextTexture, "Text Events", textColor);
}