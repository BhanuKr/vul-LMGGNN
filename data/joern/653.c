static av_cold void free_frame_buffers(Indeo3DecodeContext *ctx)

{

    int p;



    ctx->width=

    ctx->height= 0;



    for (p = 0; p < 3; p++) {

        av_freep(&ctx->planes[p].buffers[0]);

        av_freep(&ctx->planes[p].buffers[1]);

        ctx->planes[p].pixels[0] = ctx->planes[p].pixels[1] = 0;

    }

}
