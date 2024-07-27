import React from "react";
import { DocsThemeConfig } from "nextra-theme-docs";

const config: DocsThemeConfig = {
  logo: (
    <>
      {/* <svg width="100" height="100" viewBox="0 0 100 100" fill="none" xmlns="http://www.w3.org/2000/svg">
        <path d="M50 10L90 90L10 90L50 10Z" fill="currentColor" />
      </svg> */}
      <span style={{ marginLeft: ".4em", fontWeight: 900, fontSize: "1.5rem" }}>
        Cyrea App
      </span>
    </>
  ),
  project: {
    link: "https://github.com/anfastech/cyera-docs.git",
  },
  docsRepositoryBase: "https://github.com/anfastech/cyera-docs.git",
  footer: {
    text: "Cyera Gibit Corp",
  },
  sidebar: {
    defaultMenuCollapseLevel: 1,
  },
  darkMode: true,
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
