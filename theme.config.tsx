// theme.config.tsx
import React from "react";
import { DocsThemeConfig } from "nextra-theme-docs";

const config: DocsThemeConfig = {
  logo: (
    <>
      <span style={{ marginLeft: ".4em", fontWeight: 900, fontSize: "1.5rem" }}>
        Cyrea Code
      </span>
    </>
  ),
  project: {
    link: "https://github.com/anfastech/cyera-docs.git",
  },
  docsRepositoryBase: "https://github.com/anfastech/cyera-docs/tree/main",
  footer: {
    text: "Cyeranex Tech",
  },
  darkMode: true,
  sidebar: {
    defaultMenuCollapseLevel: 1,
  },
  head: (
    <>
      <meta name="viewport" content="width=device-width, initial-scale=1.0" />
      <meta name="description" content="Cyera App Documentation" />
      <meta name="og:title" content="Cyera App Documentation" />
      <style>
        {`
          .hinfo {
            padding:4px 8px;
            border:1.4px solid;
            border-radius: 6px;
          }
        `}
      </style>
    </>
  ),
  useNextSeoProps() {
    return {
      titleTemplate: "%s",
    };
  },
};

export default config;
